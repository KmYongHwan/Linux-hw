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
	{ 0x4a8c2861, "rdev_get_drvdata" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x479247f1, "power_supply_unregister" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x6114f186, "power_supply_register" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x4dd92e55, "devm_extcon_dev_register" },
	{ 0x22f00398, "devm_extcon_dev_allocate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9166fada, "strncpy" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0x86c80eb8, "devm_regulator_register" },
	{ 0x44b7a650, "power_supply_get_battery_info" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x96848186, "scnprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaecfdbce, "power_supply_set_input_current_limit_from_supplier" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x11757273, "extcon_set_state_sync" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:bq24190");
MODULE_ALIAS("i2c:bq24192");
MODULE_ALIAS("i2c:bq24192i");
MODULE_ALIAS("i2c:bq24196");

MODULE_INFO(srcversion, "95FC26E29A4DBE75E508E1B");
