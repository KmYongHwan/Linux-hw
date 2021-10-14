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
	{ 0xabe00763, "pm_relax" },
	{ 0x96848186, "scnprintf" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd61eeee, "__bitmap_subset" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xf464add, "fwnode_property_read_string" },
	{ 0x250dc6c8, "fwnode_property_present" },
	{ 0xb8d89726, "fwnode_property_read_u32_array" },
	{ 0x49b323d8, "device_property_read_string" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0x5afa59fd, "device_get_child_node_count" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0xff76d558, "input_register_device" },
	{ 0xd53f74e9, "fwnode_handle_put" },
	{ 0x5b88b85d, "gpiod_set_debounce" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf0e19cd3, "gpiod_is_active_low" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x690e053c, "devm_gpio_request_one" },
	{ 0x5fb56dbf, "devm_fwnode_get_index_gpiod_from_child" },
	{ 0x6e626fc8, "device_get_next_child_node" },
	{ 0x5d3e4191, "devm_request_any_context_irq" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xc7fad5dc, "pm_stay_awake" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa9dcba35, "pm_wakeup_dev_event" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6d2e408f, "irq_get_irq_data" },
	{ 0x5ada0011, "input_event" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-keys");
MODULE_ALIAS("of:N*T*Cgpio-keysC*");

MODULE_INFO(srcversion, "AEB794702F49A782EE87AD6");
