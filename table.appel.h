/*
 * table.h - generic hash table
 *
 * No algorithm should use these functions directly, because
 *  programming with void* is too error-prone.  Instead,
 *  each module should make "wrapper" functions that take
 *  well-typed arguments and call the TAB_ functions.
 */

typedef struct APPTAB_Table_ *APPTAB_Table;

/* Make a new table mapping "keys" to "values". */
APPTAB_Table TAB_empty(void);

/* Enter the mapping "key"->"value" into table "t", 
 *    shadowing but not destroying any previous binding for "key". */
void TAB_enter(APPTAB_Table t, void *key, void *value);

/* Look up the most recent binding for "key" in table "t" */
void *TAB_look(APPTAB_Table t, void *key);

/* Pop the most recent binding and return its key.
 * This may expose another binding for the same key, if there was one. */
void *TAB_pop(APPTAB_Table t);


/* Call "show" on every "key"->"value" pair in the table,
 *  including shadowed bindings, in order from the most 
 *  recent binding of any key to the oldest binding in the table */
void TAB_dump(APPTAB_Table t, void (*show)(void *key, void *value));

