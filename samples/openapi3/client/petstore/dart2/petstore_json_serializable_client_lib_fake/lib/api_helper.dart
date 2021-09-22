//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.0

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;

class QueryParam {
  const QueryParam(this.name, this.value);

  final String name;
  final String value;

  @override
  String toString() => '${Uri.encodeQueryComponent(name)}=${Uri.encodeQueryComponent(value)}';
}

// Ported from the Java version.
Iterable<QueryParam> _convertParametersForCollectionFormat(
  String collectionFormat,
  String name,
  dynamic value,
) {
  final params = <QueryParam>[];

  // preconditions
  if (name != null && name.isNotEmpty && value != null) {
    if (value is List) {
      if (collectionFormat == 'multi') {
        return value.map((dynamic v) => QueryParam(name, parameterToString(v)),);
      }

      // Default collection format is 'csv'.
      if (collectionFormat == null || collectionFormat.isEmpty) {
        // ignore: parameter_assignments
        collectionFormat = 'csv';
      }

      final delimiter = _delimiters[collectionFormat] ?? ',';

      params.add(QueryParam(name, value.map<dynamic>(parameterToString).join(delimiter)),);
    } else {
      params.add(QueryParam(name, parameterToString(value),));
    }
  }

  return params;
}

/// Format the given parameter object into a [String].
String parameterToString(dynamic value) {
  if (value == null) {
    return '';
  }
  if (value is DateTime) {
    return value.toUtc().toIso8601String();
  }
  if (value is EnumClass) {
    return value.toString();
  }
  if (value is OuterEnum) {
    return value.toString();
  }
  if (value is OuterEnumDefaultValue) {
    return value.toString();
  }
  if (value is OuterEnumInteger) {
    return value.toString();
  }
  if (value is OuterEnumIntegerDefaultValue) {
    return value.toString();
  }
  return value.toString();
}

/// Returns the decoded body as UTF-8 if the given headers indicate an 'application/json'
/// content type. Otherwise, returns the decoded body as decoded by dart:http package.
Future<String> _decodeBodyBytes(Response response) async {
  final contentType = response.headers['content-type'];
  return contentType != null && contentType.toLowerCase().startsWith('application/json')
    ? response.bodyBytes == null ? null : utf8.decode(response.bodyBytes)
    : response.body;
}

/// Returns a valid [T] value found at the specified Map [key], null otherwise.
T mapValueOfType<T>(dynamic map, String key) {
  final dynamic value = map is Map ? map[key] : null;
  return value is T ? value : null;
}

/// Returns a valid Map<K, V> found at the specified Map [key], null otherwise.
Map<K, V> mapCastOfType<K, V>(dynamic map, String key) {
  final dynamic value = map is Map ? map[key] : null;
  return value is Map ? value.cast<K, V>() : null;
}

/// Returns a valid [DateTime] found at the specified Map [key], null otherwise.
DateTime mapDateTime(dynamic map, String key, [String pattern]) {
  final dynamic value = map is Map ? map[key] : null;
  if (value != null) {
    int millis;
    if (value is int) {
      millis = value;
    } else if (value is String) {
      if (pattern == _dateEpochMarker) {
        millis = int.tryParse(value);
      } else {
        return DateTime.tryParse(value);
      }
    }
    if (millis != null) {
      return DateTime.fromMillisecondsSinceEpoch(millis, isUtc: true);
    }
  }
  return null;
}