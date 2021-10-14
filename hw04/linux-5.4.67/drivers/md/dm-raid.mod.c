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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xe18157fb, "dm_unregister_target" },
	{ 0x308834f2, "dm_register_target" },
	{ 0x2b44fe23, "raid5_set_cache_size" },
	{ 0x3664ba74, "r5c_journal_mode_set" },
	{ 0xb1425b32, "dm_table_add_target_callbacks" },
	{ 0xb624a50b, "md_start" },
	{ 0x9e1d94ab, "md_run" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x961c6b31, "dm_get_device" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0xe7794cc6, "dm_set_target_max_io_len" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x4d0ecd7e, "md_rdev_init" },
	{ 0xca4e4d42, "mddev_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x96848186, "scnprintf" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xfb578fc5, "memset" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6265c91a, "revalidate_disk" },
	{ 0x3dc81c59, "dm_disk" },
	{ 0x990c16b6, "dm_table_get_md" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xda52689c, "mddev_resume" },
	{ 0x97d1d7e6, "md_error" },
	{ 0xa78aec49, "sync_page_io" },
	{ 0x9266d7ef, "md_wakeup_thread" },
	{ 0x244cefd0, "md_reap_sync_thread" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x50f56772, "mddev_congested" },
	{ 0xcf54a26f, "md_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xacb5e2fd, "dm_put_device" },
	{ 0xb3c9e691, "md_rdev_clear" },
	{ 0x71dac255, "md_handle_request" },
	{ 0xa65699b0, "md_stop_writes" },
	{ 0x234b6df2, "mddev_suspend" },
	{ 0x7ea16369, "md_bitmap_load" },
	{ 0xb5381c7e, "md_bitmap_resize" },
	{ 0x2f1f2376, "mddev_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x85927aea, "md_update_sb" },
	{ 0xc5850110, "printk" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x73552eb3, "blk_limits_io_opt" },
	{ 0xcbd2301, "blk_limits_io_min" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "raid456");


MODULE_INFO(srcversion, "70C481B4A9EEB9CABDA2D43");
