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
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe3c6d9e8, "sysfs_create_bin_file" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x690e053c, "devm_gpio_request_one" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85b7373, "spi_sync" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x562cd49a, "sysfs_remove_bin_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrel,ks8995");
MODULE_ALIAS("of:N*T*Cmicrel,ks8995C*");
MODULE_ALIAS("of:N*T*Cmicrel,ksz8864");
MODULE_ALIAS("of:N*T*Cmicrel,ksz8864C*");
MODULE_ALIAS("of:N*T*Cmicrel,ksz8795");
MODULE_ALIAS("of:N*T*Cmicrel,ksz8795C*");
MODULE_ALIAS("spi:ks8995");
MODULE_ALIAS("spi:ksz8864");
MODULE_ALIAS("spi:ksz8795");

MODULE_INFO(srcversion, "D3B1B467214F23D6F83DA27");
