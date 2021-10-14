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
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfb26995d, "gpiochip_set_nested_irqchip" },
	{ 0x148fa2d1, "gpiochip_irqchip_add_key" },
	{ 0x75c0bf03, "handle_simple_irq" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x88059487, "devm_pinctrl_register" },
	{ 0x9113120c, "devm_kasprintf" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0xdae1d8d2, "devm_gpiochip_add_data" },
	{ 0xeb74317, "__devm_regmap_init" },
	{ 0x7f2dd6c6, "devm_kmemdup" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x88a1a04c, "irq_find_mapping" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xd9cde342, "pinctrl_dev_get_drvdata" },
	{ 0x85b7373, "spi_sync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc7666132, "spi_write_then_read" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x826c3a9c, "regcache_sync" },
	{ 0x67d5a9db, "regcache_cache_only" },
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:mcp23s08");
MODULE_ALIAS("spi:mcp23s17");
MODULE_ALIAS("spi:mcp23s18");
MODULE_ALIAS("i2c:mcp23008");
MODULE_ALIAS("i2c:mcp23017");
MODULE_ALIAS("i2c:mcp23018");

MODULE_INFO(srcversion, "6013D4807DB9323BCB01C43");
