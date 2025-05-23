/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.13.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestPetstoreClient/model/Order.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

Order::Order()
{
    m_Id = 0L;
    m_IdIsSet = false;
    m_PetId = 0L;
    m_PetIdIsSet = false;
    m_Quantity = 0;
    m_QuantityIsSet = false;
    m_ShipDate = utility::datetime();
    m_ShipDateIsSet = false;
    m_StatusIsSet = false;
    m_Complete = false;
    m_CompleteIsSet = false;
}

Order::~Order()
{
}

void Order::validate()
{
    // TODO: implement validation
}

web::json::value Order::toJson() const
{
    web::json::value val = web::json::value::object();
    if(m_IdIsSet)
    {   
        
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_PetIdIsSet)
    {   
        
        val[utility::conversions::to_string_t(U("petId"))] = ModelBase::toJson(m_PetId);
    }
    if(m_QuantityIsSet)
    {   
        
        val[utility::conversions::to_string_t(U("quantity"))] = ModelBase::toJson(m_Quantity);
    }
    if(m_ShipDateIsSet)
    {   
        
        val[utility::conversions::to_string_t(U("shipDate"))] = ModelBase::toJson(m_ShipDate);
    }
    if(m_StatusIsSet)
    {   
        
        utility::string_t refVal = fromStatusEnum(m_Status);
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(refVal);
        
    }
    if(m_CompleteIsSet)
    {   
        
        val[utility::conversions::to_string_t(U("complete"))] = ModelBase::toJson(m_Complete);
    }

    return val;
}

bool Order::fromJson(const web::json::value& val)
{
    bool ok = true;
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
            
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("petId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("petId")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setPetId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPetId);
            setPetId(refVal_setPetId);
            
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("quantity"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("quantity")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setQuantity;
            ok &= ModelBase::fromJson(fieldValue, refVal_setQuantity);
            setQuantity(refVal_setQuantity);
            
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("shipDate"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("shipDate")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setShipDate;
            ok &= ModelBase::fromJson(fieldValue, refVal_setShipDate);
            setShipDate(refVal_setShipDate);
            
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
            
            setStatus(toStatusEnum(refVal_setStatus));
            
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("complete"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("complete")));
        if(!fieldValue.is_null())
        {
            bool refVal_setComplete;
            ok &= ModelBase::fromJson(fieldValue, refVal_setComplete);
            setComplete(refVal_setComplete);
            
        }
    }
    return ok;
}

void Order::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_PetIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("petId")), m_PetId));
    }
    if(m_QuantityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("quantity")), m_Quantity));
    }
    if(m_ShipDateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("shipDate")), m_ShipDate));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), fromStatusEnum(m_Status)));
    }
    if(m_CompleteIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("complete")), m_Complete));
    }
}

bool Order::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        int64_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("petId"))))
    {
        int64_t refVal_setPetId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("petId"))), refVal_setPetId );
        setPetId(refVal_setPetId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("quantity"))))
    {
        int32_t refVal_setQuantity;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("quantity"))), refVal_setQuantity );
        setQuantity(refVal_setQuantity);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("shipDate"))))
    {
        utility::datetime refVal_setShipDate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("shipDate"))), refVal_setShipDate );
        setShipDate(refVal_setShipDate);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        utility::string_t refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(toStatusEnum(refVal_setStatus));
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("complete"))))
    {
        bool refVal_setComplete;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("complete"))), refVal_setComplete );
        setComplete(refVal_setComplete);
    }
    return ok;
}

Order::StatusEnum Order::toStatusEnum(const utility::string_t& value) const
{
    
    if (value == utility::conversions::to_string_t("placed")) {
        return StatusEnum::placed;
    }
    
    if (value == utility::conversions::to_string_t("approved")) {
        return StatusEnum::approved;
    }
    
    if (value == utility::conversions::to_string_t("delivered")) {
        return StatusEnum::delivered;
    }
    
    throw std::invalid_argument("Invalid value for conversion to StatusEnum");
}


const utility::string_t Order::fromStatusEnum(const StatusEnum value) const
{
    switch(value)
    {
        
        case StatusEnum::placed: return utility::conversions::to_string_t("placed");
        
        case StatusEnum::approved: return utility::conversions::to_string_t("approved");
        
        case StatusEnum::delivered: return utility::conversions::to_string_t("delivered");
        
    }
}


int64_t Order::getId() const
{
    return m_Id;
}

void Order::setId(int64_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Order::idIsSet() const
{
    return m_IdIsSet;
}

void Order::unsetId()
{
    m_IdIsSet = false;
}
int64_t Order::getPetId() const
{
    return m_PetId;
}

void Order::setPetId(int64_t value)
{
    m_PetId = value;
    m_PetIdIsSet = true;
}

bool Order::petIdIsSet() const
{
    return m_PetIdIsSet;
}

void Order::unsetPetId()
{
    m_PetIdIsSet = false;
}
int32_t Order::getQuantity() const
{
    return m_Quantity;
}

void Order::setQuantity(int32_t value)
{
    m_Quantity = value;
    m_QuantityIsSet = true;
}

bool Order::quantityIsSet() const
{
    return m_QuantityIsSet;
}

void Order::unsetQuantity()
{
    m_QuantityIsSet = false;
}
utility::datetime Order::getShipDate() const
{
    return m_ShipDate;
}


void Order::setShipDate(const utility::datetime& value)
{
    m_ShipDate = value;
    m_ShipDateIsSet = true;
}

bool Order::shipDateIsSet() const
{
    return m_ShipDateIsSet;
}

void Order::unsetShipDate()
{
    m_ShipDateIsSet = false;
}
Order::StatusEnum Order::getStatus() const
{
    return m_Status;
}


void Order::setStatus(const StatusEnum value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool Order::statusIsSet() const
{
    return m_StatusIsSet;
}

void Order::unsetStatus()
{
    m_StatusIsSet = false;
}
bool Order::isComplete() const
{
    return m_Complete;
}

void Order::setComplete(bool value)
{
    m_Complete = value;
    m_CompleteIsSet = true;
}

bool Order::completeIsSet() const
{
    return m_CompleteIsSet;
}

void Order::unsetComplete()
{
    m_CompleteIsSet = false;
}

}
}
}
}


