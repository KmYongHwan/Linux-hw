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
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x442639ef, "param_ops_uint" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cdmic-codec");
MODULE_ALIAS("of:N*T*Cdmic-codecC*");

MODULE_INFO(srcversion, "B97B38A4B314B024715FF17");
