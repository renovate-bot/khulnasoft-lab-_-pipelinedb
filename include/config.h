/*-------------------------------------------------------------------------
 *
 * config.h
 *
 * Copyright (c) 2023, KhulnaSoft-Labs, Inc.
 *
 * -------------------------------------------------------------------------
 */
#ifndef PIPELINEDB_CONFIG
#define PIPELINEDB_CONFIG

#define PIPELINEDB_EXTENSION_NAME "pipelinedb"

extern char *pipeline_version_str;
extern char *pipeline_revision_str;

extern void _PG_init(void);

extern bool IsCreatePipelineDBCommand(CreateExtensionStmt *ext);
extern bool IsDropPipelineDBCommand(DropStmt *stmt);
extern bool CreatingPipelineDB(void);
extern bool PipelineDBExists(void);

extern void cont_bgworker_main(Datum arg);

#endif
