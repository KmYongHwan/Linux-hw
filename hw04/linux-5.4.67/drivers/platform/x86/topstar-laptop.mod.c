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
	{ 0xeec78261, "acpi_bus_unregister_driver" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x8818748e, "acpi_bus_register_driver" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0xff76d558, "input_register_device" },
	{ 0x3d2bd84a, "sparse_keymap_setup" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xd38a4a4e, "sparse_keymap_report_event" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xc5850110, "printk" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sparse-keymap");

MODULE_ALIAS("acpi*:TPS0001:*");
MODULE_ALIAS("acpi*:TPSACPI01:*");

MODULE_INFO(srcversion, "16A5C2775E9AC0963E1D355");
