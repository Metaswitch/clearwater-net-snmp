/*
 * agent_read_config.h: reads configuration files for extensible sections.
 *
 */
#ifndef _AGENT_READ_CONFIG_H
#define _AGENT_READ_CONFIG_H

void init_agent_read_config (void);
RETSIGTYPE update_config (int);
struct subtree;
int tree_compare (const struct subtree *, const struct subtree *);
void setup_tree (void);
void load_subtree (struct subtree *);
int is_parent (oid *, int, oid *);
void snmpd_register_config_handler (const char *,
                                    void (*parser)(char *, char *),
                                    void (*releaser) (void),
                                    const char *);
void snmpd_unregister_config_handler (const char *);
void snmpd_store_config (const char *);

#endif /* _AGENT_READ_CONFIG_H */
