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
	{ 0x4cbcc2af, "regulator_get_bypass_regmap" },
	{ 0x4704b44f, "regulator_set_bypass_regmap" },
	{ 0x4851cb9, "regulator_list_voltage_linear_range" },
	{ 0xc7fd66d4, "regulator_is_enabled_regmap" },
	{ 0xaefd15fd, "regulator_disable_regmap" },
	{ 0xfc49dd4b, "regulator_enable_regmap" },
	{ 0x48d2ebea, "regulator_get_voltage_sel_regmap" },
	{ 0x4d64a33f, "regulator_set_voltage_sel_regmap" },
	{ 0xb8070965, "regulator_list_voltage_linear" },
	{ 0x10274e72, "platform_unregister_drivers" },
	{ 0xd01823d4, "__platform_register_drivers" },
	{ 0x56310925, "regulator_mode_to_status" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xc9328139, "irq_create_mapping" },
	{ 0x9ec43e96, "platform_get_irq_byname" },
	{ 0x222e5aca, "regulator_map_voltage_linear_range" },
	{ 0x47cc26de, "regulator_unlock" },
	{ 0x44246f71, "regulator_notifier_call_chain" },
	{ 0x45f1f35b, "regulator_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x86c80eb8, "devm_regulator_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x19ae3c48, "wm831x_reg_read" },
	{ 0xa19862fa, "rdev_get_id" },
	{ 0x95d7801d, "wm831x_set_bits" },
	{ 0xb7d449e8, "regulator_map_voltage_linear" },
	{ 0x4a8c2861, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "77AE852BB2E5B769662A8C8");
