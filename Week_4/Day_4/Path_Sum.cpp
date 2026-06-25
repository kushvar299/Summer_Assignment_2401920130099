{\rtf1\ansi\ansicpg1252\cocoartf2870
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww29200\viewh18460\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 /**\
 * Definition for a binary tree node.\
 * struct TreeNode \{\
 *     int val;\
 *     TreeNode *left;\
 *     TreeNode *right;\
 *     TreeNode() : val(0), left(nullptr), right(nullptr) \{\}\
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) \{\}\
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) \{\}\
 * \};\
 */\
class Solution \{\
public:\
    bool hasPathSum(TreeNode* root, int targetSum) \{\
        if(root == nullptr) return false;\
\
        if(root->left == nullptr && root->right == nullptr) \{\
            return targetSum == root->val;\
        \}\
\
        return hasPathSum(root->left, targetSum - root->val) ||\
               hasPathSum(root->right, targetSum - root->val);\
    \}\
\};}
