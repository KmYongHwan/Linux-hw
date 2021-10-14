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
	{ 0xfffbd279, "configfs_unregister_subsystem" },
	{ 0x40a7e198, "configfs_unregister_default_group" },
	{ 0xa6c0daa5, "configfs_register_default_group" },
	{ 0xe82f3544, "configfs_register_subsystem" },
	{ 0x2e562d35, "config_group_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xedff4be5, "acpi_load_table" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xda872864, "security_locked_down" },
	{ 0xbf67afe6, "config_item_init_type_name" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5850110, "printk" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe85f2123, "acpi_tb_unload_table" },
	{ 0x4d2c7133, "acpi_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "18021028BA2E220777C5182");
