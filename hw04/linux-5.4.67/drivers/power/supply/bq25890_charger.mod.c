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
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0x6114f186, "power_supply_register" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x944eeb50, "devm_usb_get_phy" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0xb83fb93d, "devm_regmap_field_alloc" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x479247f1, "power_supply_unregister" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x395d7993, "regmap_field_update_bits_base" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc066a4ca, "regmap_field_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:BQ258900:*");
MODULE_ALIAS("of:N*T*Cti,bq25890");
MODULE_ALIAS("of:N*T*Cti,bq25890C*");
MODULE_ALIAS("i2c:bq25890");

MODULE_INFO(srcversion, "4CDF5C0BC518A1422F1B9B3");
