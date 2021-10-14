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
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xb93527f1, "mfd_remove_devices" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x6bb624d0, "mfd_add_devices" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x690e053c, "devm_gpio_request_one" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0x96848186, "scnprintf" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xeb5bce08, "regmap_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:lm3533");

MODULE_INFO(srcversion, "07D71F7C10D2B1F8B6A9D16");
