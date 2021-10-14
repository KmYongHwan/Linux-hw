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
	{ 0x45d14bdf, "hypercall_page" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb5ff21ea, "seq_open_private" },
	{ 0x754d539c, "strlen" },
	{ 0x7545c1c3, "get_tree_single" },
	{ 0x7bcc7dd1, "seq_release_private" },
	{ 0xc4142837, "seq_printf" },
	{ 0x3349b769, "xen_xenbus_fops" },
	{ 0x534f21dd, "xen_privcmd_fops" },
	{ 0xcec6343e, "seq_read" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xfb578fc5, "memset" },
	{ 0xb3715ef1, "kill_litter_super" },
	{ 0xdefbea52, "default_llseek" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x54ea6dfe, "xen_start_flags" },
	{ 0x5187ac4b, "xen_store_evtchn" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa916b694, "strnlen" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x5d597b48, "remap_pfn_range" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x18c1f5d1, "simple_fill_super" },
	{ 0x2b0765ca, "xen_store_interface" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
};

MODULE_INFO(depends, "xen-privcmd");


MODULE_INFO(srcversion, "FBB8D76D985B825B23CDB6E");
