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
	{ 0x63331ce9, "simple_attr_release" },
	{ 0xc04c0275, "simple_attr_write" },
	{ 0x2fc2002b, "simple_attr_read" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0x2176e42a, "hwpoison_filter_memcg" },
	{ 0x6ba36c6a, "hwpoison_filter_flags_value" },
	{ 0xc0b7c903, "debugfs_create_u64" },
	{ 0x15ea2648, "hwpoison_filter_flags_mask" },
	{ 0x326cefe5, "hwpoison_filter_dev_minor" },
	{ 0x8d7e3373, "hwpoison_filter_dev_major" },
	{ 0xe31ef352, "debugfs_create_u32" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x7918d817, "memory_failure" },
	{ 0xc5850110, "printk" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x3fa55769, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x9dad7708, "hwpoison_filter" },
	{ 0x16d4ea8, "PageHuge" },
	{ 0x5d81b96, "shake_page" },
	{ 0xcc9268fc, "hwpoison_filter_enable" },
	{ 0xe0c23982, "get_hwpoison_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb907513f, "unpoison_memory" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9a087e18, "simple_attr_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "657CE32873700582557C744");
