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
	{ 0x155277eb, "touchscreen_parse_properties" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5ada0011, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0x571d537c, "device_property_read_u8_array" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff76d558, "input_register_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x2bc97e5a, "device_property_present" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F551C39C618D6BC80826993");
