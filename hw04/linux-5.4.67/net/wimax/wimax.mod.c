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
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x1c06f459, "genl_register_family" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0xb74f842f, "debugfs_create_u8" },
	{ 0x754d539c, "strlen" },
	{ 0x71227479, "genl_unregister_family" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xff282521, "rfkill_register" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x77179d2e, "param_ops_string" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x8d448251, "rfkill_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xcd279169, "nla_find" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3785c132, "init_net" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0x66593e48, "netlink_broadcast" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x789d8622, "genlmsg_put" },
	{ 0x96848186, "scnprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x83eb21c, "rfkill_unregister" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CC8910C8C84C2729C56C9A4");
