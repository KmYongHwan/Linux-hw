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
	{ 0xeec78261, "acpi_bus_unregister_driver" },
	{ 0x8818748e, "acpi_bus_register_driver" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0xf030674d, "i8042_install_filter" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xc3faca9e, "lis3lv02d_init_device" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x569abcca, "acpi_walk_resources" },
	{ 0x816b3ac4, "serio_interrupt" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xc5850110, "printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x346594f3, "lis3lv02d_remove_fs" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0xf1997630, "lis3lv02d_joystick_disable" },
	{ 0xc0b05922, "i8042_remove_filter" },
	{ 0xf5d16be7, "lis3lv02d_poweroff" },
	{ 0xc7bd69bf, "lis3lv02d_poweron" },
	{ 0xb69612ec, "lis3_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "lis3lv02d");

MODULE_ALIAS("acpi*:HPQ0004:*");
MODULE_ALIAS("acpi*:HPQ6000:*");
MODULE_ALIAS("acpi*:HPQ6007:*");

MODULE_INFO(srcversion, "8ABE96A4833FFBD5EA2A2BD");
