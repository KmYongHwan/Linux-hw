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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x2901b4a8, "input_alloc_absinfo" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xff9513b5, "input_mt_report_pointer_emulation" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x5ada0011, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1799421, "i2c_smbus_read_byte" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x35c871dd, "i2c_smbus_write_byte" },
	{ 0x6d2e408f, "irq_get_irq_data" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x4bfbdd4f, "i2c_smbus_write_block_data" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x756785cc, "i2c_smbus_read_block_data" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff76d558, "input_register_device" },
	{ 0xa9dcba35, "pm_wakeup_dev_event" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0x71deb539, "request_firmware" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xede283d, "release_firmware" },
	{ 0x5d316c81, "devm_device_add_groups" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0x1fa8ea04, "regulator_enable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ELAN0000:*");
MODULE_ALIAS("acpi*:ELAN0100:*");
MODULE_ALIAS("acpi*:ELAN0600:*");
MODULE_ALIAS("acpi*:ELAN0601:*");
MODULE_ALIAS("acpi*:ELAN0602:*");
MODULE_ALIAS("acpi*:ELAN0603:*");
MODULE_ALIAS("acpi*:ELAN0604:*");
MODULE_ALIAS("acpi*:ELAN0605:*");
MODULE_ALIAS("acpi*:ELAN0606:*");
MODULE_ALIAS("acpi*:ELAN0607:*");
MODULE_ALIAS("acpi*:ELAN0608:*");
MODULE_ALIAS("acpi*:ELAN0609:*");
MODULE_ALIAS("acpi*:ELAN060B:*");
MODULE_ALIAS("acpi*:ELAN060C:*");
MODULE_ALIAS("acpi*:ELAN060F:*");
MODULE_ALIAS("acpi*:ELAN0610:*");
MODULE_ALIAS("acpi*:ELAN0611:*");
MODULE_ALIAS("acpi*:ELAN0612:*");
MODULE_ALIAS("acpi*:ELAN0615:*");
MODULE_ALIAS("acpi*:ELAN0616:*");
MODULE_ALIAS("acpi*:ELAN0617:*");
MODULE_ALIAS("acpi*:ELAN0618:*");
MODULE_ALIAS("acpi*:ELAN0619:*");
MODULE_ALIAS("acpi*:ELAN061A:*");
MODULE_ALIAS("acpi*:ELAN061C:*");
MODULE_ALIAS("acpi*:ELAN061D:*");
MODULE_ALIAS("acpi*:ELAN061E:*");
MODULE_ALIAS("acpi*:ELAN061F:*");
MODULE_ALIAS("acpi*:ELAN0620:*");
MODULE_ALIAS("acpi*:ELAN0621:*");
MODULE_ALIAS("acpi*:ELAN0622:*");
MODULE_ALIAS("acpi*:ELAN0623:*");
MODULE_ALIAS("acpi*:ELAN0624:*");
MODULE_ALIAS("acpi*:ELAN0625:*");
MODULE_ALIAS("acpi*:ELAN0626:*");
MODULE_ALIAS("acpi*:ELAN0627:*");
MODULE_ALIAS("acpi*:ELAN0628:*");
MODULE_ALIAS("acpi*:ELAN0629:*");
MODULE_ALIAS("acpi*:ELAN062A:*");
MODULE_ALIAS("acpi*:ELAN062B:*");
MODULE_ALIAS("acpi*:ELAN062C:*");
MODULE_ALIAS("acpi*:ELAN062D:*");
MODULE_ALIAS("acpi*:ELAN062E:*");
MODULE_ALIAS("acpi*:ELAN062F:*");
MODULE_ALIAS("acpi*:ELAN0631:*");
MODULE_ALIAS("acpi*:ELAN0632:*");
MODULE_ALIAS("acpi*:ELAN0633:*");
MODULE_ALIAS("acpi*:ELAN0634:*");
MODULE_ALIAS("acpi*:ELAN0635:*");
MODULE_ALIAS("acpi*:ELAN0636:*");
MODULE_ALIAS("acpi*:ELAN0637:*");
MODULE_ALIAS("acpi*:ELAN1000:*");
MODULE_ALIAS("i2c:elan_i2c");

MODULE_INFO(srcversion, "3466BC574535BCBA6ABA405");
