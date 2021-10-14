#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x1cab47a, "fat_detach" },
	{ 0x3a966e1c, "drop_nlink" },
	{ 0x9914550d, "mark_buffer_dirty_inode" },
	{ 0x9a1e4cc5, "__mark_inode_dirty" },
	{ 0x349cba85, "strchr" },
	{ 0xf7771a24, "fat_flush_inodes" },
	{ 0xb88ecd53, "fat_truncate_time" },
	{ 0x55b81fae, "inc_nlink" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4e8b32e0, "mount_bdev" },
	{ 0xe1a232dc, "fat_sync_inode" },
	{ 0x3710a674, "fat_add_entries" },
	{ 0x12a8780f, "fat_remove_entries" },
	{ 0x40655a40, "fat_alloc_new_dir" },
	{ 0x9d52ce22, "fat_fill_super" },
	{ 0x2824934d, "fat_build_inode" },
	{ 0x70360998, "fat_update_time" },
	{ 0x16da165e, "fat_attach" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9dc84671, "set_nlink" },
	{ 0xb7d7c500, "sync_dirty_buffer" },
	{ 0x8b5636c2, "fat_getattr" },
	{ 0x1574c3c6, "__brelse" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa0fcaaeb, "kill_block_super" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0x7e5023f9, "fat_scan" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0x523db2e, "__fat_fs_error" },
	{ 0x638c7869, "current_time" },
	{ 0x4690d310, "d_splice_alias" },
	{ 0xbcbbb7c6, "fat_setattr" },
	{ 0x3a19bf4a, "fat_free_clusters" },
	{ 0xa0868b4f, "fat_get_dotdot_entry" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
	{ 0xcea6a1d2, "fat_time_unix2fat" },
	{ 0x2bfb4652, "fat_dir_empty" },
	{ 0x19973b71, "d_instantiate" },
	{ 0xf41f7e33, "clear_nlink" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D01692F7EFF184FED923163");
