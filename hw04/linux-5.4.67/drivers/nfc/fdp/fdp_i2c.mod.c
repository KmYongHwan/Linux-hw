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
	{ 0x3fc7abf0, "fdp_nci_recv_frame" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xc8a04e28, "fdp_nci_probe" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x571d537c, "device_property_read_u8_array" },
	{ 0xb18156be, "skb_pull" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf4358872, "devm_kfree" },
	{ 0x50b9de98, "devm_acpi_dev_add_driver_gpios" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xa4b6501e, "fdp_nci_remove" },
	{ 0x2bc97e5a, "device_property_present" },
};

MODULE_INFO(depends, "fdp");

MODULE_ALIAS("acpi*:INT339A:*");

MODULE_INFO(srcversion, "0B808236320DA174AD48B7B");
