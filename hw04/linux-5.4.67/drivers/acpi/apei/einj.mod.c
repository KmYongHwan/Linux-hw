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
	{ 0x12e730e, "apei_exec_noop" },
	{ 0x574609c5, "apei_exec_write_register_value" },
	{ 0x90c8498c, "apei_exec_write_register" },
	{ 0x1cb7c983, "apei_exec_read_register_value" },
	{ 0x500c768c, "apei_exec_read_register" },
	{ 0xa071f2c6, "single_release" },
	{ 0xcec6343e, "seq_read" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x63331ce9, "simple_attr_release" },
	{ 0x90019f67, "debugfs_attr_write" },
	{ 0x8553edc1, "debugfs_attr_read" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xc81b2440, "debugfs_create_blob" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x7fe0c1d7, "debugfs_create_x64" },
	{ 0x5c49fb86, "debugfs_create_x32" },
	{ 0x6b3ae022, "acpi_os_unmap_iomem" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x603d0d51, "acpi_os_map_iomem" },
	{ 0xefce1a63, "debugfs_create_file_unsafe" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xb8d8128b, "apei_get_debugfs_dir" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xc4142837, "seq_printf" },
	{ 0x70691c99, "single_open" },
	{ 0x6fcb87a1, "touch_softlockup_watchdog" },
	{ 0xc4ae915e, "arch_touch_nmi_watchdog" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf6a28554, "region_intersects" },
	{ 0xc5850110, "printk" },
	{ 0xb52e502, "apei_resources_add" },
	{ 0xfe0e7cd3, "apei_exec_post_unmap_gars" },
	{ 0x74457e56, "apei_resources_fini" },
	{ 0xe13cb4d, "apei_resources_release" },
	{ 0x8e6fa8b5, "apei_exec_pre_map_gars" },
	{ 0xef1f6e23, "apei_resources_request" },
	{ 0x17614bf3, "apei_resources_sub" },
	{ 0x58f9366, "apei_exec_collect_resources" },
	{ 0xedc03953, "iounmap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x556422b3, "ioremap_cache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbec66c3a, "__apei_exec_run" },
	{ 0xdc7df67f, "apei_exec_ctx_init" },
	{ 0x9a087e18, "simple_attr_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "268F91ACF796AA271350549");
