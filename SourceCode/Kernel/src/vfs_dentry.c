//
// Created by XingfengYang & ChengyuZhao on 2020/7/30.
//

#include <log.h>
#include <vfs_dentry.h>
#include <vfs_inode.h>

uint64_t vfs_directory_entry_default_hash(DirectoryEntry *directoryEntry, const char *name) {
  // todo
  return OK;
}

char *vfs_directory_entry_default_get_name(DirectoryEntry *directoryEntry) {
  // todo
  return "";
}

KernelStatus vfs_directory_entry_default_delete(DirectoryEntry *directory) {
  // todo
  return OK;
}

KernelStatus vfs_directory_entry_default_rename(DirectoryEntry *directory) {
  // todo
  return OK;
}

KernelStatus vfs_directory_entry_default_init(DirectoryEntry *directory, DirectoryEntry *parent, IndexNode *inode) {
  // todo
  return OK;
}