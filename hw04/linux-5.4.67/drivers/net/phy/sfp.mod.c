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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x1e99399d, "hwmon_device_register_with_info" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x536822e3, "sfp_module_insert" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6b413c9b, "sfp_link_down" },
	{ 0xb8e75250, "phy_start" },
	{ 0x4c2afd1, "sfp_add_phy" },
	{ 0x5cf1136b, "mdiobus_scan" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6ce22f0f, "hwmon_device_unregister" },
	{ 0x58def6ca, "sfp_module_remove" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5d4c6acf, "phy_device_free" },
	{ 0xde0b1fe8, "phy_device_remove" },
	{ 0x6129fb93, "sfp_remove_phy" },
	{ 0x5a889429, "phy_stop" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0xaf1863a, "sfp_register_socket" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0xe598e468, "mdio_i2c_alloc" },
	{ 0xf0b40a5, "i2c_acpi_find_adapter_by_handle" },
	{ 0xc8f2922f, "__acpi_node_get_property_reference" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xf82a295d, "gpiod_direction_input" },
	{ 0x30e70d02, "gpiod_direction_output" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x37a0cba, "kfree" },
	{ 0xf1334ebe, "i2c_put_adapter" },
	{ 0xbf023123, "mdiobus_free" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x66b97421, "sfp_link_up" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
	{ 0xb6787346, "sfp_unregister_socket" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x8cba6c0b, "devm_free_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mdio-i2c");

MODULE_ALIAS("of:N*T*Csff,sff");
MODULE_ALIAS("of:N*T*Csff,sffC*");
MODULE_ALIAS("of:N*T*Csff,sfp");
MODULE_ALIAS("of:N*T*Csff,sfpC*");

MODULE_INFO(srcversion, "E3EB9538D7A52C2D2DF6810");
