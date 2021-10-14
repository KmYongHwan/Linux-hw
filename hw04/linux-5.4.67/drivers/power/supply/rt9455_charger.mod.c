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
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0xcebeeb50, "devm_power_supply_register" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x944eeb50, "devm_usb_get_phy" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0xb83fb93d, "devm_regmap_field_alloc" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc066a4ca, "regmap_field_read" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x395d7993, "regmap_field_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:RT945500:*");
MODULE_ALIAS("of:N*T*Crichtek,rt9455");
MODULE_ALIAS("of:N*T*Crichtek,rt9455C*");
MODULE_ALIAS("i2c:rt9455-charger");

MODULE_INFO(srcversion, "2B06ED7E5764CB3449CDEB5");
