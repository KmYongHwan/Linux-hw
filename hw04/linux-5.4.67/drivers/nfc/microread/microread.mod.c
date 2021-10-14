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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xff77dbde, "nfc_hci_send_event" },
	{ 0xf1991a71, "nfc_dep_link_is_up" },
	{ 0x3c50bb37, "nfc_targets_found" },
	{ 0xf2f08c0e, "nfc_hci_set_param" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xac058c7b, "nfc_hci_allocate_device" },
	{ 0xe47d759e, "nfc_tm_activated" },
	{ 0xc5850110, "printk" },
	{ 0xcbbde9e0, "nfc_hci_get_clientdata" },
	{ 0x970ac2e9, "nfc_hci_send_cmd" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xa43935de, "nfc_set_remote_general_bytes" },
	{ 0x8439dfcf, "nfc_hci_register_device" },
	{ 0x6e12721e, "nfc_get_local_general_bytes" },
	{ 0xa53106d2, "nfc_hci_free_device" },
	{ 0xdd231c55, "nfc_hci_sak_to_protocol" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4d5f884, "nfc_hci_unregister_device" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x74fe3670, "nfc_hci_result_to_errno" },
	{ 0x7142a794, "nfc_tm_data_received" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9b9e0769, "nfc_hci_send_cmd_async" },
	{ 0xb76dd33f, "nfc_hci_get_param" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x8d6e9e4d, "nfc_hci_set_clientdata" },
};

MODULE_INFO(depends, "hci,nfc");


MODULE_INFO(srcversion, "DD58250EB1099EC8324EA79");
