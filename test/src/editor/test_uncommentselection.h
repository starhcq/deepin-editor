#ifndef TEST_UNCOMMENTSELECTION_H
#define TEST_UNCOMMENTSELECTION_H

#include "gtest/gtest.h"
#include <QTest>

namespace Comment {

class CommentDefinition;
class test_uncommentselection : public ::testing::Test
{
public:
    test_uncommentselection();
    virtual void SetUp() override;
    virtual void TearDown() override;
    CommentDefinition *comDef;
};
} // namespace Comment
#endif // TEST_UNCOMMENTSELECTION_H
