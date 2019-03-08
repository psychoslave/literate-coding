#pragma once
/**
 * Provide literate alternatives to traditional ideographic terms
 */

// Let's explicit the intempt to use alternative spellings of operators
#include <ciso646>

/**
 * Comparison infix operator, rendered as third-person singular simple present
 * verb, with the first operand taken as subject and the second as direct object
 */
#define proves ==
#define proving ==
#define as ==

/**
 * Some words just bring syntactic meaningfulness at human level
 */
#define how

/**
 * Assignment operator, rendered as imperative verb
 *
 * Considered alternatives: wed
 */
#define fit =
#define store =
#define stores =

/**
 * Define de namespace infixe denotation operator as past participle verb
 */
#define held ::

/**
 * End of statement operator, rendered as an interjection
 *
 * According to Oxford Living Dictionaries `ay` variant spelling of aye, which
 * means is defined as "A response accepting an order", and "assent".
 *
 * Note how the "y" tipographic baseline in "ay" match the one in semicolon ";"
 *
 * References:
 * - https://en.oxforddictionaries.com/explore/two-letter-words
 * - A response accepting an order.
 */
#define ay ;

#define along ,

/**
 * Zero value when marking the lake of differences.
 *
 * For example to mark equality of strings, where `strcmp` tipically returns
 * zero to indicate positive correspondance.
 *
 * The chosen term convey both:
 * - the absence of something that is usually associatied with zero
 * - the notion of identity that is targeted on the semantic level
 */
const int indifferentiation = 0;


#define of (
#define within (
#define tupled )

#define equivalence Strcmp
// (   )
// hit fed
// of  tuple
//#define pro (
//#define tuple )

#define serve {
