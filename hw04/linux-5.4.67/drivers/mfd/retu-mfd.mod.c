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
	{ 0xeb74317, "__devm_regmap_init" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0x2f4e42e1, "i2c_smbus_write_word_data" },
	{ 0xb93527f1, "mfd_remove_devices" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x6e89a560, "regmap_irq_chip_get_base" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x6bb624d0, "mfd_add_devices" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xc0ccc4df, "regmap_add_irq_chip" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x60a32ea9, "pm_power_off" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xeb5bce08, "regmap_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:retu");
MODULE_ALIAS("i2c:tahvo");
MODULE_ALIAS("of:N*T*Cnokia,retu");
MODULE_ALIAS("of:N*T*Cnokia,retuC*");
MODULE_ALIAS("of:N*T*Cnokia,tahvo");
MODULE_ALIAS("of:N*T*Cnokia,tahvoC*");

MODULE_INFO(srcversion, "26974667B784BD1A235BD1D");
