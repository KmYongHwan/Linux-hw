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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0x58412e48, "regmap_raw_write" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xb93527f1, "mfd_remove_devices" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x6e89a560, "regmap_irq_chip_get_base" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x6bb624d0, "mfd_add_devices" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xc0ccc4df, "regmap_add_irq_chip" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x269a41d4, "i2c_new_dummy_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xeb5bce08, "regmap_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cdlg,da9150");
MODULE_ALIAS("of:N*T*Cdlg,da9150C*");
MODULE_ALIAS("i2c:da9150");

MODULE_INFO(srcversion, "9CF5DA2076F5261FC2DE55B");
