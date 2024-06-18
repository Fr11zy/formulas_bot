#include "group.h"
#include <iostream>

Group::Group(): group_name(""),tg_id(0),owner_id(0) {};

Group::Group(const Group &other): group_name(other.group_name), tg_id(other.tg_id), owner_id(other.owner_id) {};

Group::Group(std::string name, int64_t id) {
    this->group_name = name;
    this->owner_id = id;
};

Group::~Group() {};

void Group::set_group_name(const std::string &name) {
    this->group_name = name;
};

void Group::set_tg_id(int64_t id) {
    this->tg_id = id;
};

void Group::set_owner_id(int64_t id) {
    this->owner_id = id;
};

std::string Group::get_group_name() const {
    return this->group_name;
};

int64_t Group::get_tg_id() const {
    return this->tg_id;
};

int64_t Group::get_owner_id() const {
    return this->owner_id;
}
