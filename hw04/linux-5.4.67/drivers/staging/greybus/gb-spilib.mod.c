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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xfc563763, "spi_register_controller" },
	{ 0xdd8a71cf, "__spi_alloc_controller" },
	{ 0x85880327, "spi_new_device" },
	{ 0x34b989b3, "spi_unregister_controller" },
	{ 0x5dc4578a, "gb_operation_sync_timeout" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9ce24b36, "gb_operation_request_send_sync_timeout" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8271648f, "spi_finalize_current_message" },
	{ 0x80561c62, "gb_operation_get_payload_size_max" },
	{ 0x3b6475ec, "gb_operation_put" },
	{ 0x872495cf, "gb_operation_create_flags" },
};

MODULE_INFO(depends, "greybus");


MODULE_INFO(srcversion, "34A339A7752132587534941");
