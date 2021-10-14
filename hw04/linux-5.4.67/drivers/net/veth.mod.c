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
	{ 0xca0e475a, "ethtool_op_get_ts_info" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0xf05254e5, "passthru_features_check" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x559b27f8, "xdp_do_flush_map" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x15314fce, "consume_skb" },
	{ 0x1161181c, "skb_headers_offset_update" },
	{ 0xe050170f, "skb_copy_header" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x83ff0628, "napi_gro_receive" },
	{ 0xff5f18c0, "bpf_redirect_info" },
	{ 0x20835a9f, "__xdp_release_frame" },
	{ 0x666b755a, "__tracepoint_xdp_exception" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xe4b30419, "build_skb" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x80eba788, "xdp_do_redirect" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd5dff0b1, "rtnl_configure_link" },
	{ 0x5df081, "__put_net" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xea4c5e82, "register_netdevice" },
	{ 0xbcfe0f, "rtnl_create_link" },
	{ 0xb4c0ab70, "rtnl_link_get_net" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0xe1e7e40c, "rtnl_nla_parse_ifla" },
	{ 0x97d530d5, "xdp_convert_zc_to_xdp_frame" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x9e08d700, "__tracepoint_xdp_bulk_tx" },
	{ 0x3dba792e, "xdp_return_frame_rx_napi" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xea08bafa, "netdev_update_features" },
	{ 0x50e3fac4, "bpf_prog_put" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x88ed209e, "xdp_rxq_info_reg" },
	{ 0xcd765caa, "xdp_rxq_info_reg_mem_model" },
	{ 0x8380220d, "xdp_rxq_info_is_reg" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0xa1a544ef, "skb_tstamp_tx" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0xbef56c0e, "__dev_forward_skb" },
	{ 0xc8676d46, "skb_clone_tx_timestamp" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0xcfddf021, "xdp_rxq_info_unreg" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xc3030f67, "napi_hash_del" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xa233d055, "xdp_return_frame" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A04ABDF64AF6251560FA7AF");
