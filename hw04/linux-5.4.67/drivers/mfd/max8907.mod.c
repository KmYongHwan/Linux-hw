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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xc5850110, "printk" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x60a32ea9, "pm_power_off" },
	{ 0x6bb624d0, "mfd_add_devices" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc0ccc4df, "regmap_add_irq_chip" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x269a41d4, "i2c_new_dummy_device" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0xb93527f1, "mfd_remove_devices" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:max8907");

MODULE_INFO(srcversion, "7665F982E73013FFEF04175");
