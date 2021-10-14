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
	{ 0x85bd1608, "__request_region" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x7137f851, "watchdog_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc5850110, "printk" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x40b69005, "platform_device_add_resources" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x637d18c6, "watchdog_register_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xeab6f4c4, "acpi_check_resource_conflict" },
	{ 0xf5ee1308, "platform_device_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A1D00C592AD2F643D2D54DA");
