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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0xf2b4ea27, "gpiod_get_optional" },
	{ 0xff76d558, "input_register_device" },
	{ 0xcfb6aca3, "arizona_clk32k_enable" },
	{ 0x45a66a9c, "arizona_request_irq" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x690e053c, "devm_gpio_request_one" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x4dd92e55, "devm_extcon_dev_register" },
	{ 0x22f00398, "devm_extcon_dev_allocate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5ada0011, "input_event" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xfff30144, "extcon_get_state" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0xb842e24b, "regulator_allow_bypass" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0x933e5790, "snd_soc_component_disable_pin" },
	{ 0x7ab723d, "snd_soc_dapm_sync" },
	{ 0x8cd4cce, "snd_soc_component_force_enable_pin" },
	{ 0xc88d8e8e, "gpiod_set_raw_value_cansleep" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x11757273, "extcon_set_state_sync" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xc5351658, "arizona_clk32k_disable" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xd0a48e60, "arizona_free_irq" },
	{ 0x29480224, "arizona_set_irq_wake" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x9a28da47, "gpiod_put" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "F2D9EB1BD8C1AEA246CE651");
