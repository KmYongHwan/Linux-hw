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
	{ 0xf9a482f9, "msleep" },
	{ 0xf5ae1a0e, "nci_req_complete" },
	{ 0x2e8f1f45, "nci_core_conn_close" },
	{ 0xe83cfdb5, "nci_recv_frame" },
	{ 0x5d04b413, "nci_send_data" },
	{ 0xbb75bab9, "nci_core_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a46a2a0, "nci_unregister_device" },
	{ 0xc3028cc7, "nci_core_conn_create" },
	{ 0x1114b631, "nci_prop_cmd" },
	{ 0x32cd01be, "nci_core_reset" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf47a54cf, "nci_core_cmd" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x69acdf38, "memcpy" },
	{ 0x71deb539, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xf0e55155, "nci_register_device" },
	{ 0x7cb716fd, "nci_get_conn_info_by_dest_type_params" },
	{ 0xede283d, "release_firmware" },
	{ 0x86c5c4cc, "nci_allocate_device" },
	{ 0xe1070446, "nci_free_device" },
	{ 0x782c7fcf, "nci_conn_max_data_pkt_payload_size" },
};

MODULE_INFO(depends, "nci");


MODULE_INFO(srcversion, "36AD642CFD1CEF46DFB07F4");
