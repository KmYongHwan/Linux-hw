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
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85b7373, "spi_sync" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x68a82987, "gpiochip_add_data_with_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xa77e039e, "gpiochip_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpisosr-gpio");
MODULE_ALIAS("of:N*T*Cpisosr-gpioC*");
MODULE_ALIAS("spi:pisosr-gpio");

MODULE_INFO(srcversion, "A22416DBF0F61597CFB4F88");
