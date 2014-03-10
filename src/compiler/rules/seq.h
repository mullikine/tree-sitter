#ifndef __tree_sitter__seq__
#define __tree_sitter__seq__

#include <vector>
#include "compiler/rules/rule.h"

namespace tree_sitter  {
    namespace rules {
        class Seq : public Rule {
        public:
            Seq(rule_ptr left, rule_ptr right);
            static rule_ptr Build(const std::vector<rule_ptr> &rules);

            bool operator==(const Rule& other) const;
            size_t hash_code() const;
            rule_ptr copy() const;
            std::string to_string() const;
            void accept(Visitor &visitor) const;

            const rule_ptr left;
            const rule_ptr right;
        };
    }
}

#endif
