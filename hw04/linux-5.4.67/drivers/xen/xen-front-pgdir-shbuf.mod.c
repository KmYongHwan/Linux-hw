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
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8eae1ee5, "gnttab_map_refs" },
	{ 0x372cfd6e, "gnttab_end_foreign_access" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0x4890e5d, "gnttab_unmap_refs" },
	{ 0x4b931968, "xen_features" },
	{ 0xd27f215d, "gnttab_alloc_grant_references" },
	{ 0x31dca4d8, "gnttab_claim_grant_reference" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf27d0a7b, "gnttab_grant_foreign_access_ref" },
	{ 0x93d1d424, "gnttab_free_grant_references" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x3362b03c, "xen_p2m_size" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9BADE79E39EACA72D0293FE");
