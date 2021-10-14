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
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0x9f08d1ab, "platform_device_del" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x96848186, "scnprintf" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi");


MODULE_INFO(srcversion, "3B7A532D7A7DE24DC2EA7C1");
