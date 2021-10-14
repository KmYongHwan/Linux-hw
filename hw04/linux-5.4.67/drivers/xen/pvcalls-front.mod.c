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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x7bc892bb, "__xenbus_register_frontend" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x46612729, "sk_alloc" },
	{ 0x523cfbfd, "_copy_to_iter" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2c4b325a, "_copy_from_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x15b225b8, "xenbus_dev_fatal" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0xf27d0a7b, "gnttab_grant_foreign_access_ref" },
	{ 0x31dca4d8, "gnttab_claim_grant_reference" },
	{ 0xd27f215d, "gnttab_alloc_grant_references" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0xecd8f23d, "xenbus_read" },
	{ 0x37a0cba, "kfree" },
	{ 0x372cfd6e, "gnttab_end_foreign_access" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe41534ce, "bind_evtchn_to_irqhandler" },
	{ 0x660da6df, "xenbus_free_evtchn" },
	{ 0x37cdc9bb, "xenbus_alloc_evtchn" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0x4b931968, "xen_features" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x57719632, "gnttab_grant_foreign_access" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xc2624ea0, "xenbus_frontend_closed" },
	{ 0x585997f1, "xenbus_switch_state" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D7921C2362062FB9010CF9A");
