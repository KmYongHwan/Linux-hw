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
	{ 0xe18157fb, "dm_unregister_target" },
	{ 0xc5850110, "printk" },
	{ 0x308834f2, "dm_register_target" },
	{ 0x2d715234, "bio_endio" },
	{ 0x68609863, "bio_associate_blkg" },
	{ 0x96f0e7d9, "dm_per_bio_data" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x961c6b31, "dm_get_device" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xacb5e2fd, "dm_put_device" },
	{ 0x96848186, "scnprintf" },
	{ 0x897cd02e, "dm_remap_zone_report" },
	{ 0x9640fac, "blkdev_report_zones" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1554017CC611C168E574228");
