#include "MiNodeComponent.h"

MiNodeComponent::MiNodeComponent() :
cn(-1),cna(-1),baseId(0)
{
  this->id = MINODE_ID_NC;
}

MiNodeComponent::~MiNodeComponent()
{

}

void MiNodeComponent::initConnector(ConnName connName)
{
  cn = connName;
  this->id = MiNodeConn::calcId(connName);
}

void MiNodeComponent::initAConnector(AnalogConnName connName)
{
  cna = connName;
  this->id = MiNodeConn::calcId(connName);
}

ConnName MiNodeComponent::getConnector()
{
  return cn;
}

AnalogConnName MiNodeComponent::AgetConnector()
{
  return cna;
}

int MiNodeComponent::getId()
{
  return baseId + this->id;
}