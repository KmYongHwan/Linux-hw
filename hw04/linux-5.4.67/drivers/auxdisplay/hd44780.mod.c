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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x20a39986, "gpiod_set_array_value_cansleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9192a401, "charlcd_register" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0x78fedf54, "devm_gpiod_get_index" },
	{ 0xa2a58bbe, "charlcd_alloc" },
	{ 0xa1017bf3, "gpiod_count" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xd0cc2e18, "charlcd_free" },
	{ 0xac53a91b, "charlcd_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "charlcd");

MODULE_ALIAS("of:N*T*Chit,hd44780");
MODULE_ALIAS("of:N*T*Chit,hd44780C*");

MODULE_INFO(srcversion, "95010C03FAE4259DE15975C");
