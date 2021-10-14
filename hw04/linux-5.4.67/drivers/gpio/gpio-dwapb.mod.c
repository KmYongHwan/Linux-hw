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
	{ 0xd27c81fb, "irq_setup_alt_chip" },
	{ 0x6d2e408f, "irq_get_irq_data" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xd53f74e9, "fwnode_handle_put" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x250dc6c8, "fwnode_property_present" },
	{ 0xb8d89726, "fwnode_property_read_u32_array" },
	{ 0x6e626fc8, "device_get_next_child_node" },
	{ 0x5afa59fd, "device_get_child_node_count" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc9328139, "irq_create_mapping" },
	{ 0x70d4aa30, "irq_set_chained_handler_and_data" },
	{ 0x6733e8b8, "handle_edge_irq" },
	{ 0x1d3b1473, "irq_gc_mask_clr_bit" },
	{ 0x7f4ce0f, "irq_gc_mask_set_bit" },
	{ 0x40c18625, "irq_gc_ack_set_bit" },
	{ 0xd110ced0, "irq_get_domain_generic_chip" },
	{ 0xf2b5d20, "__irq_alloc_domain_generic_chips" },
	{ 0xc07c9d98, "handle_level_irq" },
	{ 0x89d0d600, "__irq_domain_add" },
	{ 0x4bab991c, "irq_generic_chip_ops" },
	{ 0x761acc93, "bgpio_init" },
	{ 0x93ca905a, "acpi_gpiochip_request_interrupts" },
	{ 0x68a82987, "gpiochip_add_data_with_key" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0xd1b279c, "devm_platform_ioremap_resource" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x2652c06a, "__devm_reset_control_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x96ee549f, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0xa77e039e, "gpiochip_remove" },
	{ 0x7bfb0781, "acpi_gpiochip_free_interrupts" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa9d42b72, "gpiochip_lock_as_irq" },
	{ 0xba455a59, "gpiochip_unlock_as_irq" },
	{ 0x88a1a04c, "irq_find_mapping" },
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "gpio-generic");

MODULE_ALIAS("acpi*:HISI0181:*");
MODULE_ALIAS("acpi*:APMC0D07:*");
MODULE_ALIAS("acpi*:APMC0D81:*");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-gpio");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-gpioC*");
MODULE_ALIAS("of:N*T*Capm,xgene-gpio-v2");
MODULE_ALIAS("of:N*T*Capm,xgene-gpio-v2C*");

MODULE_INFO(srcversion, "BE38CB4332C04E8C5CC0A38");
