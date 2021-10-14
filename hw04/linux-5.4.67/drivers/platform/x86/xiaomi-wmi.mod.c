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
	{ 0xb659b1b8, "wmi_driver_unregister" },
	{ 0x169ea444, "__wmi_driver_register" },
	{ 0xff76d558, "input_register_device" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x5ada0011, "input_event" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi");

MODULE_ALIAS("wmi:409B028D-F06B-4C7C-8BBB-EE133A6BD87E");
MODULE_ALIAS("wmi:76E9027C-95D0-4180-8692-DA6747DD1C2D");

MODULE_INFO(srcversion, "8DB721D409B790023B3092D");
