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
	{ 0x442639ef, "param_ops_uint" },
	{ 0xaa2f428f, "ntb_unregister_client" },
	{ 0x95c144a, "__ntb_register_client" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x94c5b6ca, "ntb_default_port_number" },
	{ 0x7b9ab854, "ntb_default_peer_port_count" },
	{ 0x865d93f6, "debugfs_create_atomic_t" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x91c43db3, "ntb_link_event" },
	{ 0x76cfe15e, "ntb_set_ctx" },
	{ 0xf9831958, "ntb_default_peer_port_number" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x39346a1f, "ntb_clear_ctx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb");


MODULE_INFO(srcversion, "F4050CE74E68E98BF350980");
