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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0x3ecc6c17, "dw8250_setup_port" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x11b04550, "serial8250_register_8250_port" },
	{ 0x24519c40, "platform_get_resource_byname" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x2652c06a, "__devm_reset_control_get" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x5c415271, "devm_ioremap" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x1a29b2ee, "serial8250_do_set_termios" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xcefcd99a, "serial8250_unregister_port" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x5e45854, "serial8250_do_pm" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x235f30f9, "serial8250_handle_irq" },
	{ 0x5b7fece9, "serial8250_do_set_ldisc" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xd1118531, "serial8250_clear_and_reinit_fifos" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcc248d26, "serial8250_suspend_port" },
	{ 0xc7208c3a, "serial8250_resume_port" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:INT33C4:*");
MODULE_ALIAS("acpi*:INT33C5:*");
MODULE_ALIAS("acpi*:INT3434:*");
MODULE_ALIAS("acpi*:INT3435:*");
MODULE_ALIAS("acpi*:80860F0A:*");
MODULE_ALIAS("acpi*:8086228A:*");
MODULE_ALIAS("acpi*:APMC0D08:*");
MODULE_ALIAS("acpi*:AMD0020:*");
MODULE_ALIAS("acpi*:AMDI0020:*");
MODULE_ALIAS("acpi*:BRCM2032:*");
MODULE_ALIAS("acpi*:HISI0031:*");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-uart");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-uartC*");
MODULE_ALIAS("of:N*T*Ccavium,octeon-3860-uart");
MODULE_ALIAS("of:N*T*Ccavium,octeon-3860-uartC*");
MODULE_ALIAS("of:N*T*Cmarvell,armada-38x-uart");
MODULE_ALIAS("of:N*T*Cmarvell,armada-38x-uartC*");
MODULE_ALIAS("of:N*T*Crenesas,rzn1-uart");
MODULE_ALIAS("of:N*T*Crenesas,rzn1-uartC*");

MODULE_INFO(srcversion, "DB029FF6462BC1D4C5D20F3");
