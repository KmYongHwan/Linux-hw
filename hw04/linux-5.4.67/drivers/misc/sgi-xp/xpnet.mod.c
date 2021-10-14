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
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xf3b47f67, "xp_partition_id" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x12e285ec, "is_uv_system" },
	{ 0x345c9217, "xpc_disconnect" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x19b84a22, "netif_rx_ni" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x68fa7d28, "xp_remote_memcpy" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x15314fce, "consume_skb" },
	{ 0xead4f7fe, "xp_max_npartitions" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe68acd6c, "xpc_interface" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x64ba5017, "xp_pa" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc04c7267, "xpc_connect" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xp");


MODULE_INFO(srcversion, "A0EB1A3D2ECB9010C1F5C6B");
